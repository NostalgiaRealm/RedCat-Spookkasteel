/*
 * FUN_00473880 at 00473880
 * undefined __register FUN_00473880(int param_1)
 * Address ranges: 00473880-0047393a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473880(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int *in_FS_OFFSET;
  int iVar5;
  byte *local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  local_14 = 0;
  local_18 = (byte *)0x0;
  iVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffd0;
  local_8 = param_1;
  iVar2 = FUN_004687b0(*(int *)(param_1 + 0x24));
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      piVar3 = (int *)FUN_00468730(*(int *)(local_8 + 0x24),iVar4);
      if (((*(char *)((int)piVar3 + 0x39) != '\0') && (*(char *)((int)piVar3 + 0x35) == '\0')) &&
         (*(char *)((int)piVar3 + 0x36) == '\0')) {
        cVar1 = (**(code **)(*piVar3 + 0x7c))();
        if (cVar1 != '\0') {
          FUN_00468ee4((int)piVar3,extraout_EDX,extraout_ECX);
          iVar5 = 0;
          FUN_004692f8((int)piVar3,&local_14);
          local_10 = local_14;
          local_c = 0xb;
          FUN_00406a48((undefined4 *)PTR_PTR_00572298,(int *)&local_18);
          FUN_00466e30(local_18,&local_10,0,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = iVar5;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

