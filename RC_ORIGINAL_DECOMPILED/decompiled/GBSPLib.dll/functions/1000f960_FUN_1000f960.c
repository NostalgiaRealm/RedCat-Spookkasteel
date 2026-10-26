/*
 * FUN_1000f960 at 1000f960
 * undefined FUN_1000f960(void)
 * Address ranges: 1000f960-1000fa85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000f960(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_1c;
  int local_18;
  undefined1 local_14 [20];
  
  puVar4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    puVar1 = (undefined4 *)*puVar4;
    iVar2 = FUN_1000f820(puVar4,local_14);
    if (iVar2 != 0) {
      DAT_10313034 = DAT_10313034 + 1;
      iVar2 = FUN_1000cbb0(puVar4[1],local_14,&local_1c,&local_18,0);
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
      if ((local_1c == 0) || (local_18 == 0)) {
        (*DAT_1014e358)(s_SubdivideFacePatches__Patch_was_n_10039490);
        return (undefined4 *)0x0;
      }
      puVar3 = (undefined4 *)FUN_1000fe00();
      if (puVar3 == (undefined4 *)0x0) {
        (*DAT_1014e358)(s_SubdivideFacePatches__Out_of_mem_100394f8);
        return (undefined4 *)0x0;
      }
      puVar5 = puVar4;
      puVar6 = puVar3;
      for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *puVar3 = puVar1;
      puVar3[1] = local_1c;
      iVar2 = FUN_1000f6f0(puVar3);
      if (iVar2 == 0) {
LAB_1000fa56:
        (*DAT_1014e358)(s_SubdivideFacePatches__Could_not_c_100394c0);
        return (undefined4 *)0x0;
      }
      *puVar4 = puVar3;
      puVar4[1] = local_18;
      iVar2 = FUN_1000f6f0(puVar4);
      puVar1 = puVar4;
      if (iVar2 == 0) goto LAB_1000fa56;
    }
    puVar4 = puVar1;
    if (puVar4 == (undefined4 *)0x0) {
      return param_1;
    }
  } while( true );
}

