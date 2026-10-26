/*
 * FUN_00565990 at 00565990
 * undefined FUN_00565990(void)
 * Address ranges: 00565990-005659f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00565990(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  local_84 = 0;
  FUN_0060cb19(5,s_Dutch_006a3d2c);
  FUN_0060ca3d(&local_84);
  uVar1 = FUN_0060c8dd(&local_84);
  FUN_0060c076(local_80,0x80,s___H___M_006a3d38,uVar1);
  FUN_005ae390(param_1,&DAT_006a14c8,local_80);
  return param_1;
}

