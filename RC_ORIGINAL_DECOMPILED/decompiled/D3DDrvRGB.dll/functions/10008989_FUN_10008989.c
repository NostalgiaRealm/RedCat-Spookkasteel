/*
 * FUN_10008989 at 10008989
 * undefined1[10] __thiscall FUN_10008989(undefined4 param_1, int param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 10008989-10008b64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection export repair: Ghidra originally failed with Low-level Error: Overlapping input varnodes. Relaxed inferred signature source. Original inferred signature: undefined1[10] __thiscall FUN_10008989(undefined4 param_1, int param_2, uint param_3, int param_4, uint param_5). Machine code unchanged; new types remain inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Inspection export repair: Ghidra originally failed with Low-level Error: Overlapping input
   varnodes. Relaxed inferred signature source. Original inferred signature: undefined1[10]
   __thiscall FUN_10008989(undefined4 param_1, int param_2, uint param_3, int param_4, uint
   param_5). Machine code unchanged; new types remain inferred. */

undefined1  [10] __thiscall
FUN_10008989(void *param_1,int param_2,uint param_3,int param_4,uint param_5_00)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char extraout_CL;
  byte extraout_CL_00;
  char extraout_CL_01;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  bool bVar5;
  short in_FPUControlWord;
  float10 extraout_ST0;
  undefined1 auVar6 [10];
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar7;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar8;
  unkbyte10 in_ST7;
  undefined4 unaff_retaddr;
  byte bStack0000000b;
  undefined2 param_5;
  byte bStack00000012;
  undefined1 uStack00000013;
  double *pdVar9;
  double local_78 [2];
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  
  uVar1 = _param_5;
  uStack00000013 = (undefined1)(_param_5 >> 0x18);
  bStack00000012 = (byte)(uVar1 >> 0x10);
  param_5 = (undefined2)uVar1;
  uVar2 = __fload_withFB(param_1,(int)&stack0x0000000c);
  uVar3 = uVar2;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x100089a6;
    uVar2 = FUN_1000ad45();
    uVar3 = extraout_ECX;
  }
  bVar5 = (uVar3 & 0x7ff00000) == 0x7ff00000;
  if (bVar5) {
    if ((uVar2 & 0xfffff) == 0 && param_4 == 0) {
      auStack_e._6_4_ = 0x10008a6f;
      __fload_withFB(0,(int)&stack0x00000004);
      iVar4 = extraout_ECX_01;
      fVar7 = extraout_ST0_01;
      fVar8 = extraout_ST1_01;
      goto LAB_10008a6f;
    }
    auStack_e._6_4_ = 0x10008a32;
    __fload_withFB(0,(int)&stack0x00000004);
    fVar7 = extraout_ST0_00;
    fVar8 = extraout_ST1_00;
    if ((bStack00000012 & 8) == 0) {
      iVar4 = extraout_ECX_00 + 1;
      goto LAB_10008a6f;
    }
LAB_10008a3c:
    auVar6 = (undefined1  [10])(fVar7 + fVar8);
  }
  else {
    auStack_e._6_4_ = 0x100089c1;
    uVar3 = __fload_withFB(uVar3 & 0x7ff00000,(int)&stack0x00000004);
    if (!bVar5) {
      if (((uVar3 & 0x7ff00000) != 0) || ((param_3 & 0xfffff) != 0 || param_2 != 0)) {
        fVar7 = extraout_ST0;
        if ((param_3 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x10008b47;
          fVar7 = (float10)FUN_10008b65();
          fVar7 = -fVar7;
          auVar6 = _DAT_10018ff0;
          if (extraout_CL_01 == '\0') goto LAB_10008a0a;
        }
        log2(fVar7);
        auStack_e._6_4_ = 0x100089e6;
        auVar6 = FUN_1000ad30();
        if (extraout_CL == '\x01') {
          auVar6 = (undefined1  [10])-(float10)auVar6;
        }
        if (DAT_100ec134 != 0) {
          return auVar6;
        }
        auVar6 = (undefined1  [10])
                 FUN_1000ae19(&DAT_10018cd8,0x1d,unaff_retaddr,param_2,param_3,param_4,
                              CONCAT13(uStack00000013,CONCAT12(bStack00000012,param_5)));
        return auVar6;
      }
      if ((CONCAT13(uStack00000013,CONCAT12(bStack00000012,param_5)) & 0x7ff00000) == 0) {
        if ((CONCAT12(bStack00000012,param_5) & 0xfffff) != 0 || param_4 != 0) {
          auVar6 = (undefined1  [10])FUN_1000adce();
          return auVar6;
        }
        auVar6 = (undefined1  [10])FUN_1000adce();
        return auVar6;
      }
      auStack_e._6_4_ = 0x10008aed;
      FUN_10008b65();
      if ((uVar1 & 0x80000000) == 0) {
        if ((bStack0000000b >> 7 & extraout_CL_00) == 0) {
          return (undefined1  [10])(float10)0;
        }
        auVar6 = (undefined1  [10])FUN_1000adce();
        return auVar6;
      }
      auVar6 = _DAT_10018f90;
      if ((bStack0000000b >> 7 & extraout_CL_00) != 0) {
        auVar6 = (undefined1  [10])-(float10)_DAT_10018f90;
      }
      goto LAB_10008a0a;
    }
    iVar4 = 0;
    fVar7 = extraout_ST0;
    fVar8 = extraout_ST1;
LAB_10008a6f:
    if (((param_3 & 0x7ff00000) == 0x7ff00000) && ((param_3 & 0xfffff) != 0 || param_2 != 0)) {
      if ((param_3 & 0x80000) != 0) goto LAB_10008a3c;
    }
    else if (iVar4 == 0) {
      pdVar9 = local_78;
      uStack_64 = 0x10008a9d;
      auStack_e = (undefined1  [10])in_ST7;
      iVar4 = FUN_1000aebc(SUB84((double)fVar7,0),(int)((ulonglong)(double)fVar7 >> 0x20),
                           (double)fVar8,local_78);
      auVar6 = (undefined1  [10])(float10)*pdVar9;
      if (iVar4 == 0) {
        return (undefined1  [10])(float10)*pdVar9;
      }
      goto LAB_10008a0a;
    }
    auVar6 = (undefined1  [10])(fVar7 + fVar8);
  }
LAB_10008a0a:
  if (DAT_100ec134 != 0) {
    return auVar6;
  }
  auStack_e._6_4_ = 0x10008a27;
  auVar6 = (undefined1  [10])
           FUN_1000acd0(&DAT_10018cd8,0x1d,in_FPUControlWord,unaff_retaddr,param_2,param_3,param_4,
                        CONCAT13(uStack00000013,CONCAT12(bStack00000012,param_5)));
  return auVar6;
}

