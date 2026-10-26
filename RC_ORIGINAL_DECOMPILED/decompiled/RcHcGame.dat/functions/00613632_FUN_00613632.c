/*
 * FUN_00613632 at 00613632
 * undefined FUN_00613632(void)
 * Address ranges: 00613632-006136d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00613632(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  byte local_8;
  
  if (*DAT_00710054 == 'X') {
    puVar4 = &DAT_00652430;
LAB_006136c6:
    DAT_00710054 = DAT_00710054 + 1;
    FUN_00614e92(puVar4);
    return param_1;
  }
  if (*DAT_00710054 == 'Z') {
    puVar4 = &DAT_006a0628;
    goto LAB_006136c6;
  }
  uVar2 = FUN_006136d3(local_14);
  FUN_00614df0(uVar2);
  if (((local_8 & 0xf) == 0) && (cVar1 = *DAT_00710054, cVar1 != '\0')) {
    if (cVar1 != '@') {
      if (cVar1 != 'Z') {
        FUN_00614fc6(1);
        return param_1;
      }
      DAT_00710054 = DAT_00710054 + 1;
      puVar3 = (undefined1 *)FUN_006151bd(local_1c,&DAT_00652554);
      goto LAB_006136a3;
    }
    DAT_00710054 = DAT_00710054 + 1;
  }
  puVar3 = local_c;
LAB_006136a3:
  FUN_00614df0(puVar3);
  return param_1;
}

