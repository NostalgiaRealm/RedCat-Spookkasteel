/*
 * FUN_00566980 at 00566980
 * undefined FUN_00566980(void)
 * Address ranges: 00566980-005669c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00566980(undefined4 param_1)

{
  undefined1 local_1;
  
  if (DAT_006c8de8 == (undefined1 *)0x0) {
    DAT_006c8de8 = operator_new(0x10);
    if (DAT_006c8de8 != (undefined1 *)0x0) {
      local_1 = (undefined1)((uint)param_1 >> 0x18);
      *(undefined4 *)(DAT_006c8de8 + 4) = 0;
      *DAT_006c8de8 = local_1;
      *(undefined4 *)(DAT_006c8de8 + 8) = 0;
      *(undefined4 *)(DAT_006c8de8 + 0xc) = 0;
      return;
    }
    DAT_006c8de8 = (undefined1 *)0x0;
  }
  return;
}

