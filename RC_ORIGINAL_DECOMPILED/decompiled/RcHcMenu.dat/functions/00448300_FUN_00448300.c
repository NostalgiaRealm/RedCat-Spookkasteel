/*
 * FUN_00448300 at 00448300
 * undefined4 __register FUN_00448300(void)
 * Address ranges: 00448300-00448360
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00448300(void)

{
  BOOL BVar1;
  uint uVar2;
  HWND in_stack_00000004;
  
  if ((in_stack_00000004 != DAT_0056f9dc) && (in_stack_00000004 != *(HWND *)(DAT_005737d4 + 0x24)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        uVar2 = GetWindowLongA(in_stack_00000004,-0x14);
        if ((uVar2 & 8) == 0) {
          if (DAT_0056f9e0 == (HWND)0x0) {
            DAT_0056f9e0 = in_stack_00000004;
          }
        }
        else if (DAT_0056f9e4 == (HWND)0x0) {
          DAT_0056f9e4 = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}

