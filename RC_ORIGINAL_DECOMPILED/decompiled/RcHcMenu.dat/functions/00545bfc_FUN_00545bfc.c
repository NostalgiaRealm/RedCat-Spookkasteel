/*
 * FUN_00545bfc at 00545bfc
 * undefined __register FUN_00545bfc(int * param_1)
 * Address ranges: 00545bfc-00545c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 27 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 27 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00545bfc(int *param_1)

{
  undefined4 uVar1;
  
  FUN_005459f0(param_1);
  *(int *)(param_1[0x21] + 0x1c) = param_1[0xf];
  uVar1 = FUN_00549b80((int)param_1);
  FUN_00548cf4(param_1,uVar1,0);
  return;
}

