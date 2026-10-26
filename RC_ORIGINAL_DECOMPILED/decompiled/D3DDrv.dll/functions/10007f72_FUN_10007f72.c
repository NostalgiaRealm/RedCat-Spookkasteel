/*
 * FUN_10007f72 at 10007f72
 * undefined1[10] __cdecl FUN_10007f72(int param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 10007f72-10008144
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection export repair: Ghidra originally failed with Low-level Error: Overlapping input varnodes. Relaxed inferred signature source. Original inferred signature: undefined1[10] __cdecl FUN_10007f72(int param_1, uint param_2, int param_3, uint param_4). Machine code unchanged; new types remain inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Inspection export repair: Ghidra originally failed with Low-level Error: Overlapping input
   varnodes. Relaxed inferred signature source. Original inferred signature: undefined1[10] __cdecl
   FUN_10007f72(int param_1, uint param_2, int param_3, uint param_4). Machine code unchanged; new
   types remain inferred. */

undefined1  [10] __cdecl FUN_10007f72(int param_1,uint param_2,int param_3,uint param_4_00)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  char extraout_CL;
  byte extraout_CL_00;
  char extraout_CL_01;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  short in_FPUControlWord;
  float10 extraout_ST0;
  undefined1 auVar5 [10];
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST7;
  undefined4 unaff_retaddr;
  byte bStack0000000b;
  undefined2 param_4;
  byte bStack00000012;
  undefined1 uStack00000013;
  double *pdVar8;
  double local_78 [2];
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  
  uVar1 = _param_4;
  uStack00000013 = (undefined1)(_param_4 >> 0x18);
  bStack00000012 = (byte)(uVar1 >> 0x10);
  param_4 = (undefined2)uVar1;
  uVar2 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x10007f86;
    in_EAX = FUN_10009bd5();
    uVar2 = extraout_ECX;
  }
  bVar4 = (uVar2 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x1000804f;
      __fload_withFB(0,(int)&stack0x00000004);
      iVar3 = extraout_ECX_01;
      fVar6 = extraout_ST0_01;
      fVar7 = extraout_ST1_01;
      goto LAB_1000804f;
    }
    auStack_e._6_4_ = 0x10008012;
    __fload_withFB(0,(int)&stack0x00000004);
    fVar6 = extraout_ST0_00;
    fVar7 = extraout_ST1_00;
    if ((bStack00000012 & 8) == 0) {
      iVar3 = extraout_ECX_00 + 1;
      goto LAB_1000804f;
    }
LAB_1000801c:
    auVar5 = (undefined1  [10])(fVar6 + fVar7);
  }
  else {
    auStack_e._6_4_ = 0x10007fa1;
    uVar2 = __fload_withFB(uVar2 & 0x7ff00000,(int)&stack0x00000004);
    if (!bVar4) {
      if (((uVar2 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x10008127;
          fVar6 = (float10)FUN_10008145();
          fVar6 = -fVar6;
          auVar5 = _DAT_10015b30;
          if (extraout_CL_01 == '\0') goto LAB_10007fea;
        }
        log2(fVar6);
        auStack_e._6_4_ = 0x10007fc6;
        auVar5 = FUN_10009bc0();
        if (extraout_CL == '\x01') {
          auVar5 = (undefined1  [10])-(float10)auVar5;
        }
        if (DAT_101c36f8 != 0) {
          return auVar5;
        }
        auVar5 = (undefined1  [10])
                 FUN_10009ca9(&DAT_10015828,0x1d,unaff_retaddr,param_1,param_2,param_3,
                              CONCAT13(uStack00000013,CONCAT12(bStack00000012,param_4)));
        return auVar5;
      }
      if ((CONCAT13(uStack00000013,CONCAT12(bStack00000012,param_4)) & 0x7ff00000) == 0) {
        if ((CONCAT12(bStack00000012,param_4) & 0xfffff) != 0 || param_3 != 0) {
          auVar5 = (undefined1  [10])FUN_10009c5e();
          return auVar5;
        }
        auVar5 = (undefined1  [10])FUN_10009c5e();
        return auVar5;
      }
      auStack_e._6_4_ = 0x100080cd;
      FUN_10008145();
      if ((uVar1 & 0x80000000) == 0) {
        if ((bStack0000000b >> 7 & extraout_CL_00) == 0) {
          return (undefined1  [10])(float10)0;
        }
        auVar5 = (undefined1  [10])FUN_10009c5e();
        return auVar5;
      }
      auVar5 = _DAT_10015ad0;
      if ((bStack0000000b >> 7 & extraout_CL_00) != 0) {
        auVar5 = (undefined1  [10])-(float10)_DAT_10015ad0;
      }
      goto LAB_10007fea;
    }
    iVar3 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
LAB_1000804f:
    if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
      if ((param_2 & 0x80000) != 0) goto LAB_1000801c;
    }
    else if (iVar3 == 0) {
      pdVar8 = local_78;
      uStack_64 = 0x1000807d;
      auStack_e = (undefined1  [10])in_ST7;
      iVar3 = FUN_10009d4c(SUB84((double)fVar6,0),(int)((ulonglong)(double)fVar6 >> 0x20),
                           (double)fVar7,local_78);
      auVar5 = (undefined1  [10])(float10)*pdVar8;
      if (iVar3 == 0) {
        return (undefined1  [10])(float10)*pdVar8;
      }
      goto LAB_10007fea;
    }
    auVar5 = (undefined1  [10])(fVar6 + fVar7);
  }
LAB_10007fea:
  if (DAT_101c36f8 != 0) {
    return auVar5;
  }
  auStack_e._6_4_ = 0x10008007;
  auVar5 = (undefined1  [10])
           FUN_10009b60(&DAT_10015828,0x1d,in_FPUControlWord,unaff_retaddr,param_1,param_2,param_3,
                        CONCAT13(uStack00000013,CONCAT12(bStack00000012,param_4)));
  return auVar5;
}

