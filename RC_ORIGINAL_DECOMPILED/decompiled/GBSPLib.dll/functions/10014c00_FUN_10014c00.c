/*
 * FUN_10014c00 at 10014c00
 * undefined FUN_10014c00(void)
 * Address ranges: 10014c00-10014c45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10014c00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10014310(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10015fb0(0x41,&DAT_10265ce0,s___Actor_motion_c_1003a644,0xb8,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[9] = puVar1;
  return puVar1;
}

