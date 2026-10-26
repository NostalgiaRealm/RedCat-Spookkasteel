/*
 * FUN_004755ac at 004755ac
 * undefined __register FUN_004755ac(undefined * param_1, int param_2)
 * Address ranges: 004755ac-00475767;0047577f-004757a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004755ac(undefined *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined4 *local_2c;
  uint *local_28;
  uint *local_24;
  undefined4 *local_20;
  uint *local_1c;
  char cVar6;
  undefined *local_c;
  int *local_8;
  
  local_1c = (uint *)&stack0xfffffffc;
  iVar5 = 5;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = (undefined4 *)&LAB_004757a7;
  local_24 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_8 = (int *)0x0;
  local_28 = (uint *)0x4755dc;
  local_c = FUN_004041f4(param_1);
  cVar6 = '\0';
  do {
    local_28 = (uint *)0x4755eb;
    piVar3 = FUN_00403db0((int *)&stack0xfffffff0);
    local_28 = (uint *)0x4755f8;
    cVar1 = FUN_00475158((int *)&local_c,piVar3,cVar6);
    if ((byte)(cVar1 - 5U) < 9) {
      cVar6 = cVar1;
    }
  } while ((cVar1 != '\f') && (cVar1 != '\x0e'));
  if (cVar1 == '\f') {
    local_28 = (uint *)0x475626;
    local_8 = FUN_00412c18((int *)&PTR_FUN_00462320,'\x01',(int *)0x0);
    local_2c = (undefined4 *)&LAB_00475768;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    local_28 = (uint *)&stack0xfffffffc;
    FUN_00403db0((int *)&stack0xffffffec);
    do {
      piVar3 = FUN_00403db0((int *)&stack0xfffffff0);
      cVar2 = FUN_00475158((int *)&local_c,piVar3,cVar6);
      cVar1 = cVar2;
      if (8 < (byte)(cVar2 - 5U)) {
        cVar1 = cVar6;
        if (cVar2 == '\x02') {
          FUN_00403e48((int *)&stack0xffffffec,(int)unaff_EBX);
          FUN_00472080(param_2,(undefined *)unaff_ESI);
          FUN_0046e62c((int)local_8,(int *)&local_20);
          FUN_00475568(local_20,unaff_ESI,(int *)&local_1c);
          FUN_0046e650((int)local_8,local_1c);
        }
        else if (cVar2 == '\x04') {
          FUN_00475568((undefined4 *)local_8[6],unaff_ESI,(int *)&local_24);
          FUN_0046e684((int)local_8,local_24);
        }
        else if (cVar2 == '\x16') {
          iVar5 = FUN_00409c44(unaff_EBX);
          iVar4 = FUN_00471d88(param_2);
          if (iVar4 < iVar5) {
            iVar4 = FUN_0041300c(*(int *)(param_2 + 0x2c));
            if (iVar4 < iVar5) {
              FUN_0040ce84();
            }
            else {
              iVar5 = FUN_00467ef4(*(int *)(param_2 + 0x2c),iVar5 + -1);
              FUN_00403e48((int *)&stack0xffffffec,*(int *)(iVar5 + 0xc));
            }
          }
          else {
            iVar5 = FUN_00468730(*(int *)(param_2 + 0x24),iVar5 + -1);
            FUN_00403e48((int *)&stack0xffffffec,*(int *)(iVar5 + 0x2c));
          }
          FUN_0046e62c((int)local_8,(int *)&local_2c);
          FUN_00475568(local_2c,unaff_ESI,(int *)&local_28);
          FUN_0046e650((int)local_8,local_28);
        }
      }
    } while ((cVar1 == '\f') && (cVar6 = cVar1, cVar2 != '\x0e'));
    *in_FS_OFFSET = uStack_30;
  }
  *in_FS_OFFSET = local_24;
  local_1c = (uint *)&LAB_004757ae;
  local_20 = (undefined4 *)0x475799;
  FUN_00403dd4((int *)&local_2c,5);
  local_20 = (undefined4 *)0x4757a6;
  FUN_00403dd4((int *)&stack0xffffffec,2);
  return;
}

