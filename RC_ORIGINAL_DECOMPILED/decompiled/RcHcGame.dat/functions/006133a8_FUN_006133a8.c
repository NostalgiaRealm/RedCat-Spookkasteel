/*
 * FUN_006133a8 at 006133a8
 * undefined FUN_006133a8(void)
 * Address ranges: 006133a8-00613499
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006133a8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_00614e3c(param_2);
  cVar1 = *DAT_00710054;
  if (cVar1 == '\0') {
    puVar4 = local_c;
    puVar5 = local_34;
    FUN_00614fc6(2);
    uVar3 = FUN_006151fc(puVar5,puVar4);
    FUN_00614df0(uVar3);
    puVar4 = local_1c;
  }
  else {
    if (cVar1 == '?') {
      DAT_00710054 = DAT_00710054 + 1;
      uVar3 = FUN_00614dc3(0);
      uVar3 = FUN_006142ed(local_44,local_c,0,uVar3);
      FUN_006154c8(uVar3);
      puVar4 = local_4c;
    }
    else {
      if (cVar1 == 'X') {
        DAT_00710054 = DAT_00710054 + 1;
        iVar2 = FUN_0061503c();
        if (iVar2 != 0) {
          FUN_00614e92(&DAT_00652430);
          return param_1;
        }
        puVar4 = local_c;
        puVar5 = local_2c;
        FUN_00614e92("void ");
        uVar3 = FUN_006151fc(puVar5,puVar4);
        FUN_00614df0(uVar3);
        puVar4 = local_14;
        goto LAB_0061348c;
      }
      puVar4 = local_24;
    }
    puVar4 = (undefined1 *)FUN_0061349a(puVar4,local_c);
  }
LAB_0061348c:
  FUN_00614df0(puVar4);
  return param_1;
}

