/*
 * FUN_00417ce8 at 00417ce8
 * undefined __register FUN_00417ce8(int param_1, char * param_2)
 * Address ranges: 00417ce8-00417d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417ce8(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint extraout_ECX_03;
  
  uVar1 = FUN_004097ac(param_2,"False");
  if ((char)uVar1 != '\0') {
    FUN_00418ed0(param_1,8,extraout_ECX);
    return;
  }
  uVar1 = FUN_004097ac(param_2,"True");
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_004097ac(param_2,"Null");
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_004097ac(param_2,"nil");
      if ((char)uVar1 == '\0') {
        FUN_00418ed0(param_1,7,extraout_ECX_02);
        FUN_00418df0(param_1,param_2,extraout_ECX_03);
      }
      else {
        FUN_00418ed0(param_1,0xd,extraout_ECX_02);
      }
    }
    else {
      FUN_00418ed0(param_1,0,extraout_ECX_01);
    }
  }
  else {
    FUN_00418ed0(param_1,9,extraout_ECX_00);
  }
  return;
}

