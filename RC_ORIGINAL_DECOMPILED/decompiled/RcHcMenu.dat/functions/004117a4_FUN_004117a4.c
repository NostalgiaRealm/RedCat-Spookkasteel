/*
 * FUN_004117a4 at 004117a4
 * undefined __register FUN_004117a4(undefined4 * param_1, char * param_2)
 * Address ranges: 004117a4-0041185c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004117a4(undefined4 *param_1,char *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_114 [256];
  char *local_14;
  undefined **local_10;
  int local_c;
  char *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_14 = (char *)0x0;
  puStack_128 = &LAB_0041185d;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_2;
  for (local_10 = (undefined **)FUN_00402fdc(param_1); local_10 != &PTR_FUN_0041088c;
      local_10 = (undefined **)FUN_0040301c((int)local_10)) {
    psVar1 = (short *)FUN_0041165c((int)local_10);
    if ((psVar1 != (short *)0x0) && (iVar3 = (int)*psVar1, -1 < iVar3 + -1)) {
      local_c = 0;
      do {
        FUN_00402fe0(**(int **)(psVar1 + local_c * 2 + 1),local_114);
        FUN_00403fd4((int *)&local_14,local_114);
        uVar2 = FUN_004097ac(local_14,local_8);
        if ((char)uVar2 != '\0') goto LAB_00411847;
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_004116d4((int)local_8);
LAB_00411847:
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_00411864;
  puStack_128 = (undefined1 *)0x41185c;
  FUN_00403db0((int *)&local_14);
  return;
}

