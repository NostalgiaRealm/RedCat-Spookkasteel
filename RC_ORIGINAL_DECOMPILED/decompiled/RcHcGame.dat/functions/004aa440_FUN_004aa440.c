/*
 * FUN_004aa440 at 004aa440
 * undefined FUN_004aa440(void)
 * Address ranges: 004aa440-004aa4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004aa440(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x138) == -1) {
    *(undefined4 *)(param_1 + 0x138) = param_2;
  }
  iVar2 = FUN_00484d70(param_2,*(undefined4 *)(param_1 + 0x138));
  if ((*(int *)(param_1 + 0x134) == -1) || (*(int *)(param_1 + 0x134) < iVar2)) {
    *(int *)(param_1 + 0x134) = iVar2;
    if (*(int *)(*(int *)(param_1 + 300) + 0x1b8) != 4) {
      *(int *)(param_1 + 0x134) = *(int *)(*(int *)(param_1 + 300) + 0x18) + iVar2;
    }
  }
  FUN_004ad310(param_2,param_3,param_1);
  cVar1 = FUN_004ad3e0(param_2);
  if (cVar1 != '\0') {
    FUN_005117d0();
  }
  return;
}

