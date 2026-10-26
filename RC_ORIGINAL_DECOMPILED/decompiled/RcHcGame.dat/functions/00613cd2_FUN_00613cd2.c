/*
 * FUN_00613cd2 at 00613cd2
 * undefined FUN_00613cd2(void)
 * Address ranges: 00613cd2-00613d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00613cd2(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_00614dc3();
  if (*DAT_00710054 == '\0') {
    uVar5 = 2;
LAB_00613d8b:
    FUN_00614fc6(uVar5);
    return param_1;
  }
  switch(*DAT_00710054) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_00613cfe_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    uVar5 = 1;
    goto LAB_00613d8b;
  }
  FUN_006154a5(pcVar3);
switchD_00613cfe_caseD_34:
  cVar1 = *DAT_00710054;
  DAT_00710054 = DAT_00710054 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    puVar4 = local_c;
    puVar2 = local_1c;
    FUN_00614e92("unsigned ");
    uVar5 = FUN_006151fc(puVar2,puVar4);
    FUN_00614df0(uVar5);
    FUN_006154c8(local_14);
  }
  FUN_00614df0(local_c);
  return param_1;
}

