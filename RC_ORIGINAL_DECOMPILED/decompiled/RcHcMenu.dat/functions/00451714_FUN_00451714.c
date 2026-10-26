/*
 * FUN_00451714 at 00451714
 * uint __register FUN_00451714(int param_1, ushort param_2, ULONG_PTR param_3)
 * Address ranges: 00451714-0045183d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00451714(int param_1,ushort param_2,ULONG_PTR param_3)

{
  int *piVar1;
  bool bVar2;
  HWND pHVar3;
  LPCSTR pCVar4;
  BOOL BVar5;
  uint uVar6;
  char local_10 [4];
  
  uVar6 = 0;
  local_10[0] = '\x01';
  piVar1 = *(int **)(DAT_005737d8 + 0x5c);
  if ((piVar1 == (int *)0x0) || (*(short *)((int)piVar1 + 0x292) == 0)) {
    if (*(short *)(param_1 + 0xca) != 0) {
      uVar6 = (**(code **)(param_1 + 200))(*(undefined4 *)(param_1 + 0xcc),param_2,param_3,local_10)
      ;
    }
  }
  else {
    uVar6 = (*(code *)piVar1[0xa4])(piVar1[0xa5],param_2,param_3,local_10);
  }
  if (local_10[0] != '\0') {
    if (((piVar1 != (int *)0x0) && (bVar2 = FUN_00438c84((int)piVar1), bVar2)) &&
       (piVar1[0x89] != 0)) {
      pHVar3 = (HWND)FUN_00438988(piVar1);
      uVar6 = (uint)param_2;
      pCVar4 = FUN_004041f4((undefined *)piVar1[0x89]);
      BVar5 = WinHelpA(pHVar3,pCVar4,uVar6,param_3);
      return (uint)(BVar5 != 0);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(char *)(param_1 + 0x94) == '\0') {
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01f,(uint)param_2,param_3);
      }
    }
    else {
      pHVar3 = *(HWND *)(param_1 + 0x24);
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        pHVar3 = (HWND)FUN_00438988(*(int **)(param_1 + 0x38));
      }
      uVar6 = (uint)param_2;
      pCVar4 = FUN_004041f4(*(undefined **)(param_1 + 0x40));
      BVar5 = WinHelpA(pHVar3,pCVar4,uVar6,param_3);
      uVar6 = (uint)(BVar5 != 0);
    }
  }
  return uVar6;
}

