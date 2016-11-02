/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef CORE_CRYPTO_MERKLE_HPP_
#define CORE_CRYPTO_MERKLE_HPP_

#include <string>
#include <vector>

namespace merkle {

  struct MerkleNode{
    std::string hash;
    std::string pairedNode;
    std::string parent;
    std::vector<std::string> children;
  };

  struct MerkleRoot {
    std::string rootNodeHash;
    std::vector<std::string> signatures;

    MerkleRoot(std::string hash, std::vector<std::string> sigs):
      rootNodeHash(hash),
      signatures(sigs)
    {}
  };

    void addLeaf(std::string leaf, std::vector<std::string> rootSignatures);

}  // namespace merkle

#endif  // CORE_CRYPTO_MERKLE_HPP_