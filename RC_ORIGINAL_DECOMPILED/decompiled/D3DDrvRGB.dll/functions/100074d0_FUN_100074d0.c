/*
 * FUN_100074d0 at 100074d0
 * undefined4 __fastcall FUN_100074d0(char * param_1)
 * Address ranges: 100074d0-1000755c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100074d0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != '\0') {
    iVar2 = 0;
    if (param_1[0x10] != '\0') {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4 + iVar3);
        if (iVar1 != 0) {
          FUN_100054f0(iVar1);
          DAT_10028af8 = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar3) = 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x14) + iVar3) != 0) {
          FUN_10007820((int *)(*(int *)(param_1 + 0x14) + iVar3));
          *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < (int)(uint)(byte)param_1[0x10]);
    }
    if (*(LPVOID *)(param_1 + 0x14) != (LPVOID)0x0) {
      FUN_10008c95(*(LPVOID *)(param_1 + 0x14));
    }
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1 = param_1 + 4;
    }
  }
  return 1;
}

