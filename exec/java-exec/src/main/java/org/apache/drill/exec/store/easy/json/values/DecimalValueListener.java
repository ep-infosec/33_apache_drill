/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.apache.drill.exec.store.easy.json.values;

import java.math.BigDecimal;

import org.apache.drill.exec.store.easy.json.loader.JsonLoaderImpl;
import org.apache.drill.exec.store.easy.json.parser.TokenIterator;
import org.apache.drill.exec.vector.accessor.ScalarWriter;

import com.fasterxml.jackson.core.JsonToken;

public class DecimalValueListener extends ScalarListener {

  public DecimalValueListener(JsonLoaderImpl loader, ScalarWriter writer) {
    super(loader, writer);
  }

  @Override
  public void onValue(JsonToken token, TokenIterator tokenizer) {
    switch (token) {
      case VALUE_NULL:
        setNull();
        break;
      case VALUE_NUMBER_INT:
      case VALUE_NUMBER_FLOAT:
      case VALUE_STRING:
        try {
          addValueToListenerMap(writer.schema().name(), new BigDecimal(tokenizer.textValue()));
          writer.setDecimal(new BigDecimal(tokenizer.textValue()));
        } catch (NumberFormatException e) {
          throw loader.dataConversionError(schema(), "DECIMAL", tokenizer.textValue());
        }
        break;
      default:
        throw tokenizer.invalidValue(token);
    }
  }

  @Override
  protected void setArrayNull() {
    writer.setDecimal(BigDecimal.ZERO);
  }
}
