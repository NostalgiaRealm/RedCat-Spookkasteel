/*
 * FUN_00611200 at 00611200
 * undefined FUN_00611200(void)
 * Address ranges: 00611200-0061129a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00611200(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,ushort param_6)

{
  undefined4 uVar1;
  undefined1 local_7c [60];
  undefined1 local_40 [60];
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    _DAT_00710038 = param_4;
    _DAT_0071003c = param_5;
    _DAT_00710048 = 0;
    _DAT_00710040 = 0;
    _DAT_00710044 = 0;
    FUN_00615634();
    FUN_00615634();
    DAT_00710058 = param_2;
    DAT_00710054 = param_2;
    DAT_00710068 = 0;
    DAT_00710060 = param_3;
    DAT_0071005c = param_1;
    DAT_0071004c = local_40;
    DAT_00710030 = local_7c;
    DAT_00710064 = (uint)param_6;
    uVar1 = FUN_006112be();
    FUN_0061129b();
  }
  return uVar1;
}

