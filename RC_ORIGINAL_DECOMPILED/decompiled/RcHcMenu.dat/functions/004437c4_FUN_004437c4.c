/*
 * FUN_004437c4 at 004437c4
 * undefined __register FUN_004437c4(int * param_1, int * param_2)
 * Address ranges: 004437c4-0044383b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004437c4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0043d40c);
  if ((char)uVar1 == '\0') {
    FUN_00412b58(param_1,param_2);
  }
  else {
    FUN_0043dd00(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x2d)));
    FUN_0043dd58(param_2,param_1[0x12]);
    FUN_0043ddb0(param_2,(uint *)param_1[0x13]);
    FUN_0043de18(param_2,param_1[0xd]);
    FUN_0043dc40(param_2,(uint *)param_1[9]);
    FUN_0043decc(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x32)));
    (**(code **)(*param_2 + 0x34))();
  }
  return;
}

