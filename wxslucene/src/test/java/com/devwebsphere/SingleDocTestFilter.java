package com.devwebsphere;

/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import org.apache.lucene.index.IndexReader;
import org.apache.lucene.search.DocIdSet;
import org.apache.lucene.search.Filter;
import org.apache.lucene.util.DocIdBitSet;

import java.util.BitSet;
import java.io.IOException;

public class SingleDocTestFilter extends Filter {
  private int doc;

  public SingleDocTestFilter(int doc) {
    this.doc = doc;
  }

  public DocIdSet getDocIdSet(IndexReader reader) throws IOException {
    BitSet bits = new BitSet(reader.maxDoc());
    bits.set(doc);
    return new DocIdBitSet(bits);
  }
}
