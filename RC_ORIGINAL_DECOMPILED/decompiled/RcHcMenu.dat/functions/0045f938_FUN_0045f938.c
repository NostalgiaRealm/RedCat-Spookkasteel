/*
 * FUN_0045f938 at 0045f938
 * undefined __register FUN_0045f938(int * param_1)
 * Address ranges: 0045f938-0045f992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f938(int *param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (param_1[2] == 0) {
    FUN_00403d94("Assertion failure");
  }
  bVar1 = FUN_0045e70c(param_1[2]);
  FUN_0045e5e8((int *)param_1[2]);
  bVar2 = FUN_0045e70c(param_1[2]);
  if (bVar2 != bVar1) {
    FUN_0045fee8(param_1);
  }
  return;
}

