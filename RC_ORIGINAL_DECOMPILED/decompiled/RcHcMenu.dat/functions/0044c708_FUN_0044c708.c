/*
 * FUN_0044c708 at 0044c708
 * undefined __register FUN_0044c708(int param_1, char param_2)
 * Address ranges: 0044c708-0044c7ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c708(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((((*(byte *)(param_1 + 0x2cc) & 8) == 0) && (*(int *)(DAT_005737d4 + 0x38) != 0)) &&
       (*(int *)(*(int *)(DAT_005737d4 + 0x38) + 0x230) != 0)) &&
      (param_1 != *(int *)(DAT_005737d4 + 0x38))) &&
     ((*(char *)(param_1 + 0x217) == '\x01' ||
      (*(char *)(*(int *)(DAT_005737d4 + 0x38) + 0x217) != '\x02')))) {
    iVar2 = 0;
    if ((((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x230) != 0)) &&
       ((*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0' ||
        (*(char *)(param_1 + 0x217) == '\x01')))) {
      iVar2 = *(int *)(param_1 + 0x230);
    }
    iVar1 = *(int *)(*(int *)(DAT_005737d4 + 0x38) + 0x230);
    if (param_2 == '\0') {
      FUN_00444f18(iVar1,iVar2);
    }
    else {
      FUN_00444efc(iVar1,iVar2);
    }
  }
  return;
}

