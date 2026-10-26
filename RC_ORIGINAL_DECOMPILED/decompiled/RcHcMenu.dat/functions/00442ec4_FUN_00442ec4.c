/*
 * FUN_00442ec4 at 00442ec4
 * undefined __register FUN_00442ec4(int param_1, byte param_2)
 * Address ranges: 00442ec4-00442f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00442ec4(int param_1,byte param_2)

{
  uint uIDCheckItem;
  HMENU hMenu;
  UINT uCheck;
  
  if (param_2 != *(byte *)(param_1 + 0x2c)) {
    *(byte *)(param_1 + 0x2c) = param_2;
    if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x20) & 2) == 0)) {
      uCheck = *(UINT *)(&DAT_0056f940 + (uint)param_2 * 4);
      uIDCheckItem = (uint)*(ushort *)(param_1 + 0x44);
      hMenu = (HMENU)FUN_0044169c(*(int *)(param_1 + 0x58));
      CheckMenuItem(hMenu,uIDCheckItem,uCheck);
    }
    if ((param_2 != 0) && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_00442e7c(param_1);
    }
  }
  return;
}

