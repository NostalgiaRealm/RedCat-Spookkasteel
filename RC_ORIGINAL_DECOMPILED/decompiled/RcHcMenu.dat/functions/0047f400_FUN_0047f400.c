/*
 * FUN_0047f400 at 0047f400
 * undefined __register FUN_0047f400(int param_1, double * param_2)
 * Address ranges: 0047f400-0047f570
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0047f4ca) */
/* WARNING: Removing unreachable block (ram,0x0047f481) */

void FUN_0047f400(int param_1,double *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  ULONG *in_FS_OFFSET;
  undefined4 auStack_28 [3];
  
  auStack_28[2] = &stack0xfffffffc;
  iVar5 = 4;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  auStack_28[1] = &LAB_0047f571;
  auStack_28[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)auStack_28;
  cVar1 = FUN_0046f9c0(param_1);
  if (((cVar1 == '\x01') || (cVar1 == '\x10')) || (cVar1 == '\x17')) {
    FUN_00470b20(param_1,(VARIANT *)&stack0xffffffe4);
    FUN_00405c34((VARIANTARG *)&stack0xffffffe4,(int *)(param_1 + 0x10));
    iVar5 = FUN_00404030(*(int *)(param_1 + 0x10));
    if ((iVar5 < 0x100) && (cVar1 = FUN_0046f9c0(param_1), cVar1 != '\x10')) {
      FUN_0046fc4c(param_1,param_2);
    }
    else {
      pcVar2 = FUN_004041f4(*(undefined **)(param_1 + 0x10));
      *(char **)param_2 = pcVar2;
      iVar5 = FUN_0040a108(pcVar2);
      *(int *)((int)param_2 + 4) = iVar5;
    }
  }
  else {
    cVar1 = FUN_0046f9c0(param_1);
    if (((byte)(cVar1 - 0xfU) < 7) || ((byte)(cVar1 - 0x1eU) < 2)) {
      FUN_00470b20(param_1,(VARIANT *)&stack0xffffffd4);
      FUN_00405c34((VARIANTARG *)&stack0xffffffd4,(int *)(param_1 + 0x10));
      uVar3 = FUN_00404030(*(int *)(param_1 + 0x10));
      *(undefined4 *)((int)param_2 + 4) = uVar3;
      puVar4 = FUN_004041f4(*(undefined **)(param_1 + 0x10));
      *(undefined **)param_2 = puVar4;
    }
    else {
      FUN_0046fc4c(param_1,param_2);
    }
  }
  *in_FS_OFFSET = auStack_28[0];
  auStack_28[2] = &LAB_0047f578;
  auStack_28[1] = 0x47f570;
  FUN_00404878((VARIANTARG *)&stack0xffffffd4,&DAT_00401108,2);
  return;
}

