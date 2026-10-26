/*
 * FUN_0043e3c8 at 0043e3c8
 * undefined __register FUN_0043e3c8(int param_1)
 * Address ranges: 0043e3c8-0043e468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e3c8(int param_1)

{
  HBITMAP pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar6;
  undefined4 uVar7;
  RECT local_1c;
  HDC local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = GetDC((HWND)0x0);
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  piVar5 = *(int **)(local_8 + 0x44);
  pHVar1 = CreateCompatibleBitmap(local_c,*(int *)(local_8 + 0x28),*(int *)(local_8 + 0x24));
  FUN_00422004(piVar5,pHVar1);
  iVar2 = FUN_00421490(piVar5);
  FUN_0041c318(*(int **)(iVar2 + 0x14),0);
  uVar3 = (**(code **)(*piVar5 + 0x20))();
  pRVar6 = &local_1c;
  uVar4 = (**(code **)(*piVar5 + 0x2c))();
  FUN_00411624(0,0,uVar4,&pRVar6->left,uVar3);
  pRVar6 = &local_1c;
  piVar5 = (int *)FUN_00421490(piVar5);
  FUN_0041c9f8(piVar5,pRVar6);
  *in_FS_OFFSET = uVar7;
  ReleaseDC((HWND)0x0,local_c);
  return;
}

