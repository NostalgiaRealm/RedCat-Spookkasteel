/*
 * FUN_0045f898 at 0045f898
 * undefined __register FUN_0045f898(undefined4 * param_1)
 * Address ranges: 0045f898-0045f8f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f898(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (param_1[1] == 0) {
    FUN_00403d94("Assertion failure");
  }
  bVar1 = FUN_0045e70c(param_1[1]);
  FUN_0045e5e8((int *)param_1[1]);
  bVar2 = FUN_0045e70c(param_1[1]);
  if (bVar2 != bVar1) {
    FUN_0045fec8(param_1);
  }
  return;
}

