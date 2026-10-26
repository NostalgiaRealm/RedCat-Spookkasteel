/*
 * FUN_004c2e30 at 004c2e30
 * undefined __register FUN_004c2e30(int * param_1, int * param_2)
 * Address ranges: 004c2e30-004c2f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 5 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 5 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c2e30(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  int *in_FS_OFFSET;
  VARIANTARG local_144;
  VARIANTARG local_134;
  byte local_124 [220];
  undefined4 uStack_48;
  VARIANTARG *pVStack_44;
  VARIANTARG *pVStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  int iStack_28;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  
  local_1c = (int *)&stack0xfffffffc;
  iVar3 = 0x27;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_20 = &LAB_004c2fac;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  iStack_28 = 0x4c2e6a;
  iVar3 = FUN_00403224(param_2,(int)&DAT_004bca60);
  if (*(int *)(iVar3 + 4) == 0) {
    iStack_28 = 0x4c2e80;
    FUN_00402fe0(*param_1,local_124);
    iStack_28 = 0x4c2e8e;
    FUN_00403fd4(&local_24,local_124);
    iStack_28 = local_24;
    pcStack_2c = ".DoCreateViewFor: ";
    pcStack_30 = " Parameter cannot be nil";
    puStack_34 = (undefined1 *)0x4c2ea8;
    FUN_004040f0((int *)&local_20,3);
    puStack_34 = (undefined1 *)0x4c2eba;
    FUN_00403d94(local_20);
  }
  puStack_38 = &LAB_004c2f64;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  pVStack_40 = (VARIANTARG *)0x4c2ed5;
  puStack_34 = &stack0xfffffffc;
  piVar2 = FUN_00406aa0((int *)&local_1c);
  pVStack_40 = (VARIANTARG *)0x4c2ee4;
  cVar1 = FUN_00403128((int *)0x0,(int *)&DAT_004c3020,piVar2);
  if (cVar1 == '\0') {
    pVStack_40 = (VARIANTARG *)0x4c2f06;
    FUN_004ce600(param_1,(int *)0x0,(int *)&stack0xffffffe8);
  }
  else {
    pVStack_40 = (VARIANTARG *)0x4c2ef6;
    (**(code **)(*local_1c + 0xc))(local_1c,param_1,&stack0xffffffe8);
  }
  pVStack_40 = (VARIANTARG *)0x4c2f14;
  FUN_004054ac(&local_134,unaff_EBX);
  pVStack_40 = &local_134;
  pVStack_44 = (VARIANTARG *)0x4c2f2c;
  FUN_004054ac(&local_144,puRam0000003c);
  pVStack_44 = &local_144;
  uStack_48 = 0x4c2f41;
  iVar3 = FUN_00403224(param_2,(int)&DAT_004bca60);
  pVStack_40 = (VARIANTARG *)0x4c2f4b;
  piVar2 = (int *)FUN_004b90a0(*(int *)(iVar3 + 4),pVStack_44);
  *in_FS_OFFSET = iStack_3c;
  puStack_34 = &LAB_004c2f6b;
  puStack_38 = (undefined1 *)0x4c2f63;
  FUN_00403094(piVar2);
  return;
}

