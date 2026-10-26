/*
 * FUN_0061476d at 0061476d
 * undefined FUN_0061476d(void)
 * Address ranges: 0061476d-0061482b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061476d(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  cVar1 = *DAT_00710054;
  if (cVar1 == '\0') {
    puVar4 = local_1c;
    FUN_00614fc6(2);
    uVar3 = FUN_006151fc(puVar4,param_2);
    FUN_00614df0(uVar3);
    puVar4 = local_c;
  }
  else if ((param_3 == 0) || (cVar1 != 'X')) {
    if (cVar1 == 'Y') {
      DAT_00710054 = DAT_00710054 + 1;
      puVar4 = (undefined1 *)FUN_0061482c(local_1c,param_2);
    }
    else {
      puVar4 = (undefined1 *)FUN_00613845(local_1c,param_2);
    }
  }
  else {
    DAT_00710054 = DAT_00710054 + 1;
    iVar2 = FUN_0061503c();
    if (iVar2 != 0) {
      FUN_00614e92(&DAT_00652430);
      return param_1;
    }
    puVar4 = local_14;
    FUN_00614e92("void ");
    uVar3 = FUN_006151fc(puVar4,param_2);
    FUN_00614df0(uVar3);
    puVar4 = local_c;
  }
  FUN_00614df0(puVar4);
  return param_1;
}

