const p1 = new Promise((resolve, reject) => { 
  setTimeout(() => {
    resolve("Resolved Value!!");
  }, 10000); // 10-second delay
});

const p2 = new Promise((resolve, reject) => { 
  setTimeout(() => {
    resolve("Resolved Value!!");
  }, 5000); // 5-second delay 
});

async function handlePromise() {
  console.log("🚀 Starting async function: handlePromise()");
  console.log("👉 Logging immediately before awaiting the Promise for the first time.");

  const val1 = await p1; 
  console.log("✅ First await completed. Promise has been resolved.");
  console.log("🔁 Logging the first resolved value:");
  console.log("promise 1 time →", val1);

  console.log("🧠 Awaiting the second Promise (`p2`) — this should have a shorter delay.");
  const val2 = await p2; 
  console.log("✅ Second await completed. Promise has been resolved.");
  console.log("🔁 Logging the second resolved value:");
  console.log("promise 2 time →", val2);
}

handlePromise();
console.log("👋 This log appears immediately after calling handlePromise() but before the first await is resolved.");


// Printing Sum Of Tw   o Numbers

function sum(a, b) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve(a + b);
    }, 2000); // Simulating a delay of 2 seconds
  });
}