/*
 * FUN_0061035f at 0061035f
 * undefined FUN_0061035f(void)
 * Address ranges: 0061035f-00610462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0061035f(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  piVar1 = DAT_0071001c;
  if (DAT_00710020 == '\0') {
    piVar1 = (int *)FUN_0061d4a8(*param_1);
    FUN_0061d431(param_2 + (uint)(0 < param_3) + (uint)(*piVar1 == 0x2d),param_3 + 1,piVar1);
  }
  else {
    FUN_00610677(param_2 + (*DAT_0071001c == 0x2d));
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar2 = puVar2[1];
    puVar2[1] = DAT_006b28c0;
  }
  puVar2 = (undefined1 *)FUN_00611110();
  if (param_4 != 0) {
    *puVar2 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar3 = piVar1[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      puVar2[1] = 0x2d;
    }
    if (99 < iVar3) {
      puVar2[2] = puVar2[2] + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      puVar2[3] = puVar2[3] + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    puVar2[4] = puVar2[4] + (char)iVar3;
  }
  return param_2;
}

