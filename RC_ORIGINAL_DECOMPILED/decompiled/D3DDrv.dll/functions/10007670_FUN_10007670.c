/*
 * FUN_10007670 at 10007670
 * undefined4 __fastcall FUN_10007670(undefined4 * param_1)
 * Address ranges: 10007670-100076f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10007670(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1[5] + 4 + iVar3);
      if (iVar1 != 0) {
        FUN_100049e0(iVar1);
        DAT_101271e0 = 1;
        *(undefined4 *)(param_1[5] + 4 + iVar3) = 0;
      }
      if (*(int *)(param_1[5] + iVar3) != 0) {
        FUN_10007a20((int *)(param_1[5] + iVar3));
        *(undefined4 *)(param_1[5] + iVar3) = 0;
        *(undefined4 *)(param_1[5] + 0xc + iVar3) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 4));
  }
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    FUN_1000824b((LPVOID)param_1[5]);
  }
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return 1;
}

