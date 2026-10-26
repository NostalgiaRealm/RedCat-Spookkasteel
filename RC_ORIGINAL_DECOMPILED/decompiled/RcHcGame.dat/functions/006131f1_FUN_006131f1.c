/*
 * FUN_006131f1 at 006131f1
 * undefined FUN_006131f1(void)
 * Address ranges: 006131f1-006132cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006131f1(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  byte local_8;
  
  FUN_00614dc3();
  uVar1 = FUN_00611577(local_14);
  FUN_006154c8(uVar1);
  if ((((local_8 & 0xf) == 0) && (*DAT_00710054 != '\0')) && (*DAT_00710054 != '@')) {
    puVar6 = local_c;
    puVar5 = local_14;
    puVar3 = local_1c;
    puVar4 = &DAT_006b1504;
    FUN_00611a1e(local_24,puVar3,&DAT_006b1504,puVar5,puVar6);
    FUN_006151bd(puVar3,puVar4);
    uVar1 = FUN_006151fc(puVar5,puVar6);
    FUN_006154c8(uVar1);
  }
  if (*DAT_00710054 == '@') {
    DAT_00710054 = DAT_00710054 + 1;
  }
  else {
    if (*DAT_00710054 == '\0') {
      iVar2 = FUN_0061503c();
      if (iVar2 == 0) {
        puVar6 = local_c;
        puVar5 = local_24;
        puVar3 = local_1c;
        puVar4 = &DAT_006b1504;
        FUN_00614fc6(2);
        FUN_006151bd(puVar3,puVar4);
        uVar1 = FUN_006151fc(puVar5,puVar6);
        FUN_006154c8(uVar1);
        goto LAB_006132bc;
      }
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    FUN_00615520(uVar1);
  }
LAB_006132bc:
  FUN_00614df0(local_c);
  return param_1;
}

