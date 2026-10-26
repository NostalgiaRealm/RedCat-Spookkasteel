/*
 * FUN_00461138 at 00461138
 * undefined4 __register FUN_00461138(undefined * param_1, int param_2)
 * Address ranges: 00461138-00461289
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00461138(undefined *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  undefined3 uVar5;
  
  uVar5 = (undefined3)((uint)unaff_EBX >> 8);
  uVar4 = CONCAT31(uVar5,1);
  cVar1 = '\0';
  iVar2 = FUN_00404030((int)param_1);
  if (param_2 <= iVar2) {
    cVar1 = param_1[param_2 + -1];
  }
  iVar2 = FUN_00404030((int)param_1);
  if (iVar2 < param_2) {
    return 0;
  }
  uVar3 = FUN_0040d830(param_1,param_2);
  if ((char)uVar3 != '\0') {
    return CONCAT31(uVar5,1);
  }
  if ((((1 < param_2) && (param_1[param_2 + -2] == '\\')) &&
      (uVar3 = FUN_0040d830(param_1,param_2 + -1), (char)uVar3 == '\0')) &&
     (((param_2 < 3 || (param_1[param_2 + -3] != '\\')) ||
      (uVar3 = FUN_0040d830(param_1,param_2 + -2), (char)uVar3 != '\0')))) {
    return CONCAT31(uVar5,1);
  }
  if (((cVar1 == DAT_00570600) && (iVar2 = FUN_00404030((int)param_1), 3 < iVar2)) &&
     (iVar2 = FUN_00404030((int)param_1), iVar2 + -4 < param_2)) {
    return CONCAT31(uVar5,6);
  }
  iVar2 = FUN_00404030((int)param_1);
  if ((((3 < iVar2) && (iVar2 = FUN_00404030((int)param_1), iVar2 + -4 < param_2)) &&
      (param_1[param_2 + -2] == DAT_00570600)) &&
     (((param_2 < 3 || (param_1[param_2 + -3] != '\\')) ||
      (uVar3 = FUN_0040d830(param_1,param_2 + -2), (char)uVar3 == '\x02')))) {
    return CONCAT31(uVar5,7);
  }
  if ((cVar1 == '/') || (cVar1 == ':')) {
    uVar4 = CONCAT31(uVar5,2);
  }
  else if ((((cVar1 == '!') || (cVar1 == '<')) || (cVar1 == '>')) || (cVar1 == '\\')) {
    uVar4 = CONCAT31(uVar5,3);
  }
  else if (((cVar1 == '#') || (cVar1 == '9')) ||
          ((cVar1 == 'a' || ((cVar1 == 'c' || (cVar1 == 'l')))))) {
    uVar4 = CONCAT31(uVar5,5);
  }
  else if ((((cVar1 == '0') || (cVar1 == 'A')) || (cVar1 == 'C')) || (cVar1 == 'L')) {
    uVar4 = CONCAT31(uVar5,4);
  }
  return uVar4;
}

