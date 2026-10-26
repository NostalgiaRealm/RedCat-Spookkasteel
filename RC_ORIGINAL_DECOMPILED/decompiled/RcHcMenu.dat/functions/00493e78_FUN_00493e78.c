/*
 * FUN_00493e78 at 00493e78
 * undefined __register FUN_00493e78(int * param_1, byte * param_2)
 * Address ranges: 00493e78-00494021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00493e78(int *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  char local_d;
  byte *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_124 = &LAB_00494022;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00494c5c(param_1,param_2);
  if (local_14 == (int *)0x0) {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_134 = ": propRef points to an AppProp that can not be found or is not allocated";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
  }
  uVar3 = FUN_0040320c(local_14,(int)&PTR_FUN_0048ce0c);
  if ((char)uVar3 != '\0') {
    iVar4 = FUN_00403224(local_14,(int)&PTR_FUN_0048ce0c);
    bVar1 = FUN_0047445c(iVar4);
    if (bVar1) {
      piVar5 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_0048ce0c);
      piVar5 = (int *)FUN_004744a0(piVar5);
      iVar4 = FUN_004949e8(piVar5);
      if (0 < (short)iVar4) {
        FUN_0048de00(local_c,0);
        local_d = '\x01';
        goto LAB_00494007;
      }
    }
  }
  bVar2 = FUN_0048dff0(local_c);
  if (bVar2 == 1) {
    piVar5 = (int *)FUN_00494858(local_8);
    uVar3 = FUN_0049312c(piVar5,local_c);
    if ((char)uVar3 != '\0') {
      local_d = FUN_004940f4(local_8,local_c);
LAB_00494007:
      *in_FS_OFFSET = pcStack_134;
      FUN_00403dd4(&local_1c,2);
      return;
    }
  }
  piVar5 = (int *)FUN_00495ee0((int)local_14);
  local_d = FUN_004940f4(piVar5,local_c);
LAB_00493ff5:
  do {
    if (local_d != '\0') goto LAB_00494007;
    bVar2 = FUN_0048dff0(local_c);
    if (bVar2 < 2) goto LAB_00494007;
    FUN_0048dea8(local_c);
    local_14 = (int *)FUN_00494c5c(local_8,local_c);
    bVar2 = FUN_0048dff0(local_c);
    if (bVar2 == 1) {
      piVar5 = (int *)FUN_00494858(local_8);
      uVar3 = FUN_0049312c(piVar5,local_c);
      if ((char)uVar3 != '\0') {
        local_d = FUN_004940f4(local_8,local_c);
        goto LAB_00493ff5;
      }
    }
    piVar5 = (int *)FUN_00495ee0((int)local_14);
    local_d = FUN_004940f4(piVar5,local_c);
  } while( true );
}

