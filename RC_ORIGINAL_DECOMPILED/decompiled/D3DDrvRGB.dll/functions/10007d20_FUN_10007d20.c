/*
 * FUN_10007d20 at 10007d20
 * undefined4 __thiscall FUN_10007d20(void * this, int param_1, int param_2, undefined4 * param_3, float * param_4, int param_5, int param_6)
 * Address ranges: 10007d20-10007f90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10007d20(void *this,int param_1,int param_2,undefined4 *param_3,float *param_4,int param_5,
            int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  float fVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar1 = param_5 * 3 + -6;
  if ((-1 < iVar1) && (iVar1 % 3 == 0)) {
    if ((*(int *)((int)this + 0x34) <= *(int *)((int)this + 0x38) + param_5) ||
       ((*(int *)((int)this + 0x20) <= *(int *)((int)this + 0x24) + 1 ||
        (*(int *)((int)this + 0x18) <= *(int *)((int)this + 0x1c) + iVar1)))) {
      FUN_10007bb0(this);
    }
    if (*(int *)((int)this + 0xc) != param_1) {
      FUN_10007970(this,param_1);
    }
    fVar8 = 1.0 / (float)(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
    fVar2 = param_4[2];
    fVar3 = param_4[3];
    fVar4 = *param_4;
    fVar5 = param_4[1];
    *(int *)((int)this + 8) = param_6;
    puVar12 = (undefined4 *)(*(int *)((int)this + 0x38) * 0x20 + *(int *)((int)this + 0x30));
    *(int *)(*(int *)((int)this + 0x24) * 0x10 + 0xc + *(int *)((int)this + 0x10)) = param_2;
    *(undefined4 *)(*(int *)((int)this + 0x24) * 0x10 + 8 + *(int *)((int)this + 0x10)) = 0;
    *(int *)(*(int *)((int)this + 0x24) * 0x10 + 4 + *(int *)((int)this + 0x10)) = param_5;
    lVar13 = __ftol();
    if (0 < param_5) {
      param_4 = (float *)param_5;
      do {
        fVar6 = (float)param_3[2];
        *puVar12 = *param_3;
        puVar12[1] = param_3[1];
        puVar12[3] = 1.0 / fVar6;
        puVar12[2] = 1.0 - 1.0 / fVar6;
        fVar6 = (float)param_3[4];
        puVar12[6] = (fVar8 / fVar2) * (float)param_3[3] + fVar8 * fVar4;
        puVar12[7] = (fVar8 / fVar3) * fVar6 + fVar8 * fVar5;
        lVar14 = __ftol();
        lVar15 = __ftol();
        lVar16 = __ftol();
        puVar12[4] = ((int)lVar14 << 8 | (uint)lVar15) << 8 | (uint)lVar16 | (int)lVar13 << 0x18;
        param_3 = param_3 + 9;
        puVar12 = puVar12 + 8;
        param_4 = (float *)((int)param_4 + -1);
      } while (param_4 != (float *)0x0);
    }
    sVar7 = *(short *)((int)this + 0x38);
    iVar11 = *(int *)((int)this + 0x1c);
    sVar10 = sVar7 + 1;
    if (iVar11 < iVar11 + iVar1) {
      iVar9 = iVar11 * 2 + 4;
      do {
        iVar11 = iVar11 + 3;
        *(short *)(*(int *)((int)this + 0x14) + -4 + iVar9) = sVar7;
        *(short *)(*(int *)((int)this + 0x14) + -2 + iVar9) = sVar10;
        sVar10 = sVar10 + 1;
        *(short *)(*(int *)((int)this + 0x14) + iVar9) = sVar10;
        iVar9 = iVar9 + 6;
      } while (iVar11 < *(int *)((int)this + 0x1c) + iVar1);
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + param_5;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + iVar1;
    if (param_2 != 0) {
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
    }
    return 1;
  }
  FUN_10005fc0((byte *)s___Adding_illegal__d_verts_10018c20);
  return 0;
}

