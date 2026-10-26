/*
 * FUN_00602bbb at 00602bbb
 * undefined FUN_00602bbb(void)
 * Address ranges: 00602bbb-00602c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall
FUN_00602bbb(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined1 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_5 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  else {
    if (param_5 != 1) {
      *param_2 = *param_6;
      FUN_00605987(0);
      FUN_00605614(param_6,0,0xffffffff);
      return param_2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  *param_2 = param_2._3_1_;
  FUN_00605987(0);
  uVar1 = FUN_0060f51c(uVar2);
  FUN_006056f2(uVar2,uVar1);
  return param_2;
}

