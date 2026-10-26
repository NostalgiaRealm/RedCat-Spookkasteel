/*
 * FUN_00487e18 at 00487e18
 * undefined __register FUN_00487e18(int param_1, int param_2)
 * Address ranges: 00487e18-00487f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00487e18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *unaff_EBX;
  ULONG *in_FS_OFFSET;
  VARIANTARG local_40;
  char *local_30;
  undefined4 auStack_28 [3];
  int local_10;
  
  auStack_28[2] = &stack0xfffffffc;
  iVar5 = 7;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  auStack_28[1] = &LAB_00487f44;
  auStack_28[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)auStack_28;
  iVar5 = FUN_0041300c(param_2);
  if (-1 < iVar5 + -1) {
    local_10 = 0;
    do {
      iVar1 = FUN_0046f0d0(param_2,local_10);
      FUN_00403e48((int *)&stack0xffffffec,*(int *)(iVar1 + 0x2c));
      local_30 = (char *)0x487e89;
      FUN_00404238((int)unaff_EBX,1,4,(int *)&local_30);
      iVar2 = FUN_00409758(local_30,"OLD_");
      if (iVar2 == 0) {
        FUN_00404278((int *)&stack0xffffffec,1,4);
      }
      piVar3 = (int *)FUN_00472108(param_1,unaff_EBX);
      if (piVar3 != (int *)0x0) {
        if (iVar2 != 0) {
          FUN_004694d4((int)piVar3,&stack0xffffffd4);
          uVar4 = FUN_00405c08((short *)&stack0xffffffd4);
          if ((char)uVar4 != '\0') {
            FUN_004694f0((int)piVar3,&stack0xffffffd4);
          }
          FUN_00470434(iVar1,piVar3,(VARIANTARG *)&stack0xffffffd4);
        }
        else {
          FUN_004694f0((int)piVar3,&local_40);
          FUN_00470434(iVar1,piVar3,&local_40);
        }
      }
      local_10 = local_10 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = auStack_28[0];
  auStack_28[2] = &LAB_00487f4b;
  auStack_28[1] = 0x487f2b;
  FUN_00405bcc(&local_40);
  auStack_28[1] = 0x487f33;
  FUN_00403db0((int *)&local_30);
  auStack_28[1] = 0x487f3b;
  FUN_00405bcc((VARIANTARG *)&stack0xffffffd4);
  auStack_28[1] = 0x487f43;
  FUN_00403db0((int *)&stack0xffffffec);
  return;
}

