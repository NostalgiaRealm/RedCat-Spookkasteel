/*
 * FUN_0043dbc4 at 0043dbc4
 * undefined __register FUN_0043dbc4(int * param_1, int * param_2)
 * Address ranges: 0043dbc4-0043dc3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42d8bc slot 0 for THintAction. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42d8bc slot 0 for
   THintAction. Original bytes unchanged; names and types still inferred. */

void FUN_0043dbc4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var;
  undefined4 extraout_EDX_01;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0043d40c);
  if ((char)uVar1 == '\0') {
    FUN_00412b58(param_1,param_2);
  }
  else {
    FUN_0043dc40(param_2,(uint *)param_1[0x15]);
    FUN_0043dca8(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x16]));
    FUN_0043dd00(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x59)));
    FUN_0043dd58(param_2,param_1[0x17]);
    FUN_0043ddb0(param_2,(uint *)param_1[0x18]);
    FUN_0043de18(param_2,param_1[0x19]);
    FUN_0043de70(param_2,CONCAT22(extraout_var,(short)param_1[0x1a]));
    FUN_0043decc(param_2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x6a)));
  }
  return;
}

