/*
 * FUN_005ff2e9 at 005ff2e9
 * undefined FUN_005ff2e9(void)
 * Address ranges: 005ff2e9-005ff32d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ff2e9(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_10 [16];
  
  puVar1 = (undefined4 *)FUN_00600d9a(local_10);
  *(undefined4 *)(param_1 + 8) = *puVar1;
  *(undefined4 *)(param_1 + 0xc) = puVar1[1];
  *(undefined4 *)(param_1 + 0x10) = puVar1[2];
  *(undefined4 *)(param_1 + 0x14) = puVar1[3];
  if (DAT_0070fc08 == 0) {
    DAT_0070fc08 = *(int *)(param_1 + 0x10);
    FUN_0060a57b(&LAB_005e79b0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

