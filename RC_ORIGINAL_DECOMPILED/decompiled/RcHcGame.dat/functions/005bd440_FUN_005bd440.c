/*
 * FUN_005bd440 at 005bd440
 * undefined FUN_005bd440(void)
 * Address ranges: 005bd440-005bd485
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005bd440(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x41,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0xb9,&DAT_006b3f70,0
                );
    return (undefined4 *)0x0;
  }
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[9] = puVar1;
  return puVar1;
}

