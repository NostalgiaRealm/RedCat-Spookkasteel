/*
 * FUN_00409fb8 at 00409fb8
 * undefined __register FUN_00409fb8(undefined * param_1, int * param_2)
 * Address ranges: 00409fb8-0040a006
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409fb8(undefined *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00409f34(&DAT_0040a010,param_1);
  if ((1 < (int)uVar1) && (param_1[uVar1 - 1] == '\\')) {
    if ((param_1[uVar1 - 2] == ':') || (param_1[uVar1 - 2] == '\\')) {
      uVar2 = FUN_0040d830(param_1,uVar1 - 1);
      if ((char)uVar2 != '\x02') goto LAB_00409ff4;
    }
    uVar1 = uVar1 - 1;
  }
LAB_00409ff4:
  FUN_00404238((int)param_1,1,uVar1,param_2);
  return;
}

