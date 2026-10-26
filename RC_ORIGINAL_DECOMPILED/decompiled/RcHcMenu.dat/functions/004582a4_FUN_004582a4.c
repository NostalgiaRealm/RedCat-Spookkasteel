/*
 * FUN_004582a4 at 004582a4
 * int __register FUN_004582a4(int param_1, char * param_2)
 * Address ranges: 004582a4-00458303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004582a4(int param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_14;
  
  local_14 = 0;
  uVar3 = 1;
  uVar1 = FUN_00404030(param_1);
  if (uVar1 != 0) {
    do {
      while ((uVar3 <= uVar1 &&
             (uVar2 = FUN_00458254(param_2,*(char *)(param_1 + -1 + uVar3)), (char)uVar2 != '\0')))
      {
        uVar3 = uVar3 + 1;
      }
      if (uVar3 <= uVar1) {
        local_14 = local_14 + 1;
      }
      while ((uVar3 <= uVar1 &&
             (uVar2 = FUN_00458254(param_2,*(char *)(param_1 + -1 + uVar3)), (char)uVar2 == '\0')))
      {
        uVar3 = uVar3 + 1;
      }
    } while (uVar3 <= uVar1);
  }
  return local_14;
}

