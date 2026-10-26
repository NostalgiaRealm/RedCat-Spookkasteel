/*
 * FUN_1000bc80 at 1000bc80
 * undefined FUN_1000bc80(void)
 * Address ranges: 1000bc80-1000c00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000bc80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = DAT_10311d00;
  if (0xfff < DAT_10311d00) {
    (*DAT_1014e358)(s_LoadEntity__Max_Entities__100389ac);
    return 0;
  }
  puVar1 = &DAT_10265cf8 + DAT_10311d00 * 0x2b;
  puVar3 = puVar1;
  DAT_10311d00 = DAT_10311d00 + 1;
  for (iVar6 = 0x2b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar6 = FUN_10014a00(4);
  if (iVar6 == 0) {
    (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_1003897c);
    return 0;
  }
  iVar6 = 0;
  if (0 < local_c) {
    do {
      puVar3 = (undefined4 *)FUN_10001090(param_1);
      if (puVar3 == (undefined4 *)0x0) {
        (*DAT_1014e358)(s_LoadEntity__Could_not_load_entit_10038914);
        return 0;
      }
      puVar3[10] = iVar6;
      *puVar3 = *puVar1;
      *puVar1 = puVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_c);
  }
  if (1 < DAT_10311d00) {
    for (puVar3 = (undefined4 *)*puVar1; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3
        ) {
      if ((puVar3[3] & 0x100) != 0) {
        FUN_1000ba00(puVar3,&DAT_10265cf8,0x120);
      }
    }
  }
  iVar6 = FUN_10014a00(4);
  if (iVar6 == 0) {
    (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_10038944);
    return 0;
  }
  if ((local_4 == 1) && (iVar6 = FUN_1000bbc0(puVar1,param_1), iVar6 == 0)) {
    (*DAT_1014e358)(s_LoadEntity__Failed_to_load_motio_100388e0);
    return 0;
  }
  iVar6 = FUN_10014a00(4);
  if (iVar6 == 0) {
    (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_100388a8);
    return 0;
  }
  param_1 = 0;
  puVar3 = (undefined4 *)0x0;
  if (0 < local_8) {
    do {
      puVar4 = (undefined4 *)FUN_10014310(0xc);
      iVar6 = FUN_10014a00(4);
      if (iVar6 == 0) {
        FUN_10014360(puVar4);
        _DAT_1003fde8 = 0;
        (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_1003884c);
        return 0;
      }
      uVar5 = FUN_10014310(local_14 + 1);
      puVar4[1] = uVar5;
      iVar6 = FUN_10014a00(local_14);
      if (iVar6 == 0) {
        FUN_10014360(puVar4[1]);
        puVar4[1] = 0;
        _DAT_1003fde8 = 0;
        (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_10038818);
        return 0;
      }
      *(undefined1 *)(puVar4[1] + local_14) = 0;
      iVar6 = FUN_10014a00(4);
      if (iVar6 == 0) {
        FUN_10014360(puVar4[1]);
        puVar4[1] = 0;
        _DAT_1003fde8 = 0;
        (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_100387e0);
        return 0;
      }
      uVar5 = FUN_10014310(local_10 + 1);
      puVar4[2] = uVar5;
      iVar6 = FUN_10014a00(local_10);
      if (iVar6 == 0) {
        FUN_10014360(puVar4[2]);
        puVar4[2] = 0;
        _DAT_1003fde8 = 0;
        FUN_10014360(puVar4[1]);
        puVar4[1] = 0;
        _DAT_1003fde8 = 0;
        (*DAT_1014e358)(s_LoadEntity__There_was_an_error_r_100387a8);
        return 0;
      }
      *(undefined1 *)(puVar4[2] + local_10) = 0;
      *puVar4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        (&DAT_10265d00)[iVar2 * 0x2b] = puVar4;
      }
      else {
        *puVar3 = puVar4;
      }
      param_1 = param_1 + 1;
      puVar3 = puVar4;
    } while (param_1 < local_8);
  }
  iVar6 = FUN_1000b1d0(puVar1,s_origin_100388a0,&DAT_10265d48 + iVar2 * 0x2b);
  if (iVar6 != 0) {
    (&DAT_10265da0)[iVar2 * 0x2b] = (&DAT_10265da0)[iVar2 * 0x2b] | 1;
  }
  for (puVar1 = (undefined4 *)(&DAT_10265d00)[iVar2 * 0x2b]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar6 = FUN_100332c0(puVar1[2],s__typedef__10038894);
    if ((iVar6 == 0) ||
       ((iVar6 = FUN_100332c0(puVar1[1],s_classname_10038888), iVar6 == 0 &&
        (iVar6 = FUN_100332c0(puVar1[2],s__Model__10038880), iVar6 == 0)))) {
      (&DAT_10265da0)[iVar2 * 0x2b] = (&DAT_10265da0)[iVar2 * 0x2b] & 0xfffffffe;
    }
  }
  return 1;
}

