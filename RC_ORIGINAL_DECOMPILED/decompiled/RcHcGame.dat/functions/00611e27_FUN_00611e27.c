/*
 * FUN_00611e27 at 00611e27
 * undefined FUN_00611e27(void)
 * Address ranges: 00611e27-00611f48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611e27(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_e0 [60];
  undefined1 local_a4 [60];
  undefined1 local_68 [68];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar3 = DAT_00710050;
  uVar2 = DAT_0071004c;
  uVar1 = DAT_00710030;
  if ((*DAT_00710054 == '?') && (DAT_00710054[1] == '$')) {
    DAT_00710054 = DAT_00710054 + 2;
    FUN_00615634();
    FUN_00615634();
    FUN_00615634();
    DAT_00710030 = local_68;
    DAT_0071004c = local_a4;
    DAT_00710050 = local_e0;
    uVar5 = FUN_00611577(local_14);
    FUN_00614df0(uVar5);
    iVar6 = FUN_0061503c();
    if (iVar6 == 0) {
      uVar5 = FUN_00611f49(local_24);
      puVar7 = local_1c;
      FUN_00614dcd(0x3c);
      uVar5 = FUN_006151fc(puVar7,uVar5);
      FUN_00614df0(uVar5);
      FUN_00615373(local_14);
      cVar4 = FUN_006150ae();
      if (cVar4 == '>') {
        FUN_006152a2(0x20);
      }
      FUN_006152a2(0x3e);
    }
    DAT_00710030 = (undefined1 *)uVar1;
    DAT_0071004c = (undefined1 *)uVar2;
    DAT_00710050 = (undefined1 *)uVar3;
    FUN_00614df0(local_c);
    return param_1;
  }
  FUN_00614fc6(1);
  return param_1;
}

