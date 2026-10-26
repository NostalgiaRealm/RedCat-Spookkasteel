/*
 * FUN_100062c0 at 100062c0
 * undefined4 __thiscall FUN_100062c0(void * this, int param_1, undefined4 * param_2, int param_3, int param_4)
 * Address ranges: 100062c0-1000645d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100062c0(void *this,int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar1 = param_3 * 3 + -6;
  if ((*(int *)((int)this + 0x2c) <= *(int *)((int)this + 0x30) + param_3) ||
     (*(int *)((int)this + 0x20) <= *(int *)((int)this + 0x24) + iVar1)) {
    FUN_100061e0(this);
  }
  if (*(int *)((int)this + 0xc) != param_1) {
    FUN_100060e0(this,param_1);
  }
  *(int *)((int)this + 8) = param_4;
  lVar9 = __ftol();
  puVar8 = (undefined4 *)(*(int *)((int)this + 0x30) * 0x20 + *(int *)((int)this + 0x28));
  if (0 < param_3) {
    param_4 = param_3;
    do {
      fVar2 = (float)param_2[2];
      *puVar8 = *param_2;
      puVar8[1] = param_2[1];
      puVar8[3] = 1.0 / fVar2;
      puVar8[2] = 1.0 - 1.0 / fVar2;
      fVar2 = (float)param_2[4];
      fVar3 = *(float *)((int)this + 0x14);
      puVar8[6] = (float)param_2[3] * *(float *)((int)this + 0x10);
      puVar8[7] = fVar2 * fVar3;
      lVar10 = __ftol();
      lVar11 = __ftol();
      lVar12 = __ftol();
      puVar8[4] = ((int)lVar10 << 8 | (uint)lVar11) << 8 | (uint)lVar12 | (int)lVar9 << 0x18;
      param_2 = param_2 + 9;
      puVar8 = puVar8 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  sVar4 = *(short *)((int)this + 0x30);
  iVar7 = *(int *)((int)this + 0x24);
  sVar6 = sVar4 + 1;
  if (iVar7 < iVar7 + iVar1) {
    iVar5 = iVar7 * 2 + 4;
    do {
      iVar7 = iVar7 + 3;
      *(short *)(iVar5 + -4 + *(int *)((int)this + 0x1c)) = sVar4;
      *(short *)(iVar5 + -2 + *(int *)((int)this + 0x1c)) = sVar6;
      sVar6 = sVar6 + 1;
      *(short *)(iVar5 + *(int *)((int)this + 0x1c)) = sVar6;
      iVar5 = iVar5 + 6;
    } while (iVar7 < *(int *)((int)this + 0x24) + iVar1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + param_3;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + iVar1;
  return 1;
}

