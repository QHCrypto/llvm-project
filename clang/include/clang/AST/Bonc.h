#ifndef LLVM_CLANG_AST_BONC_H
#define LLVM_CLANG_AST_BONC_H

#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/APSInt.h"

#include <vector>

namespace clang {

class BoncMetaparamInfo {
public:
  llvm::StringRef Name;
  std::vector<llvm::APSInt> Values;
  BoncMetaparamInfo() = default;
  BoncMetaparamInfo(llvm::StringRef Name, std::vector<llvm::APSInt> Values)
      : Name(Name), Values(std::move(Values)) {}
      
  BoncMetaparamInfo(const BoncMetaparamInfo &) = default;
  BoncMetaparamInfo &operator=(const BoncMetaparamInfo &) = default;
  BoncMetaparamInfo(BoncMetaparamInfo &&) = default;
  BoncMetaparamInfo &operator=(BoncMetaparamInfo &&) = default;
  ~BoncMetaparamInfo() = default;
};

} // namespace clang

#endif