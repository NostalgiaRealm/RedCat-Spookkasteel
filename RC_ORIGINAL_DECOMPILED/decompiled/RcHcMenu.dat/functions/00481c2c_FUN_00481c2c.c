/*
 * FUN_00481c2c at 00481c2c
 * undefined __register FUN_00481c2c(int param_1, char param_2)
 * Address ranges: 00481c2c-00481cfd;00481d08-00481d0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481c2c(int param_1,char param_2)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  
  if (param_2 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 8) + -1;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x2c),iVar3);
        FUN_00403094(piVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe4;
      FUN_00402800(*(int *)(param_1 + 0x38));
      FUN_00406aa0((int *)(param_1 + 0x34));
      *in_FS_OFFSET = uVar4;
    }
  }
  else {
    DVar1 = GetCurrentThreadId();
    if (DVar1 == *(DWORD *)PTR_DAT_00572618) {
      if (*(char *)(param_1 + 0x42) != '\0') {
        piVar2 = FUN_0047f92c((int *)&DAT_0047d3d0,'\x01',param_1,'\0',0x481de0,param_1,4,
                              param_1 + 0x58,0x15,0);
        FUN_004121d8(*(int **)(param_1 + 0x2c),(int)piVar2);
      }
      piVar2 = FUN_0047f92c((int *)&DAT_0047d3d0,'\x01',param_1,'\0',0x480828,param_1,0x50,
                            param_1 + 100,0x1c,0);
      FUN_004121d8(*(int **)(param_1 + 0x2c),(int)piVar2);
    }
  }
  return;
}

