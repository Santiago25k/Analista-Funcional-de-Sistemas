const COLORS=["#fff2","#fff4","#fff7","#fffc"],space1=document.querySelector(".space-1"),space2=document.querySelector(".space-2"),space3=document.querySelector(".space-3"),meteor=document.querySelector(".meteor"),getRandomCoordinates=()=>({x:Math.floor(100*Math.random()),y:Math.floor(100*Math.random())}),generateSpaceLayer=(e,r,t)=>{let a=Array(t).fill(null).map(()=>{let e=COLORS[Math.floor(Math.random()*COLORS.length)],{x:r,y:t}=getRandomCoordinates();return`${r}vw ${t}vh 0 ${e}, ${r}vw ${t+100}vh 0 ${e}`}).join(",");r.style.setProperty("--size",e),r.style.setProperty("--space-layer",a)},generateMeteorLayer=(e,r,t)=>{let a=Array(t).fill(null).map(()=>{let e=COLORS[Math.floor(Math.random()*COLORS.length)],{x:r,y:t}=getRandomCoordinates();return`${r}vw ${t}vh 0 ${e}`}).join(",");r.style.setProperty("--size",e),r.style.setProperty("--meteor-layer",a)};requestAnimationFrame(()=>{generateSpaceLayer("2px",space1,150),generateSpaceLayer("3px",space2,75),generateSpaceLayer("6px",space3,37),generateMeteorLayer("4px",meteor,12)});