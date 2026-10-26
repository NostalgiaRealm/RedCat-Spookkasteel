/*
 * FUN_004498e4 at 004498e4
 * undefined __register FUN_004498e4(int param_1, int param_2, int param_3)
 * Address ranges: 004498e4-00449987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004498e4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 500) + 0x1e) = 1;
    }
    FUN_0044902c(*(int *)(param_1 + 0x1f0),0);
    FUN_0044902c(*(int *)(param_1 + 500),0);
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      iVar1 = *(int *)(param_1 + 0x1f0);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        FUN_0044917c(iVar1,iVar2);
      }
      iVar1 = *(int *)(param_1 + 500);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        FUN_0044917c(iVar1,iVar2);
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 500) + 0x1e) = 0;
  return;
}

