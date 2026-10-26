/*
 * FUN_006092d2 at 006092d2
 * undefined FUN_006092d2(void)
 * Address ranges: 006092d2-00609332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_006092d2(int param_1,undefined4 param_2,byte param_3,byte param_4,char param_5)

{
  char *pcVar1;
  
  if ((((*(char *)(param_1 + 0x28) == '\0') && ((param_3 & 0xfe) == 0)) && ((param_4 & 0xfe) == 0))
     && ((-1 < param_5 && (param_5 < '\x05')))) {
    pcVar1 = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v+ $v $++$ v+$ v$ v++$ v$ +v" +
             (int)param_5 +
             (-(uint)(param_3 != 1) & 0xffffffd8) + (-(uint)(param_4 != 1) & 0xffffffec) + 0x3c;
  }
  else {
    pcVar1 = "$+vx";
  }
  FUN_0060eb70(param_2,pcVar1,4);
  return;
}

