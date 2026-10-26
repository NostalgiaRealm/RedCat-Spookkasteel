/*
 * FUN_0053dd10 at 0053dd10
 * undefined FUN_0053dd10(void)
 * Address ranges: 0053dd10-0053dd90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053dd10(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != iVar1; iVar3 = iVar3 + 0x14) {
    if (*(int *)(iVar3 + 4) != 0) {
      pcVar2 = (char *)FUN_0043b090(*(int *)(iVar3 + 4));
      if ((*pcVar2 == '\0') ||
         (pcVar2 = (char *)FUN_0043b090(*(undefined4 *)(iVar3 + 4)), *pcVar2 == -1)) {
        FUN_00548d30(*(int *)(iVar3 + 4) + -1,*(int *)(iVar3 + 0xc) + 2);
      }
      else {
        pcVar2 = (char *)FUN_0043b090(*(undefined4 *)(iVar3 + 4));
        *pcVar2 = *pcVar2 + -1;
      }
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

